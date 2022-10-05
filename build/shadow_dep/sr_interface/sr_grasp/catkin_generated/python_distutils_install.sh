#!/bin/sh

if [ -n "$DESTDIR" ] ; then
    case $DESTDIR in
        /*) # ok
            ;;
        *)
            /bin/echo "DESTDIR argument must be absolute... "
            /bin/echo "otherwise python's distutils will bork things."
            exit 1
    esac
    DESTDIR_ARG="--root=$DESTDIR"
fi

echo_and_run() { echo "+ $@" ; "$@" ; }

echo_and_run cd "/home/mamad/Graspit/src/shadow_dep/sr_interface/sr_grasp"

# ensure that Python install destination exists
echo_and_run mkdir -p "$DESTDIR/home/mamad/Graspit/install/lib/python2.7/dist-packages"

# Note that PYTHONPATH is pulled from the environment to support installing
# into one location when some dependencies were installed in another
# location, #123.
echo_and_run /usr/bin/env \
    PYTHONPATH="/home/mamad/Graspit/install/lib/python2.7/dist-packages:/home/mamad/Graspit/build/lib/python2.7/dist-packages:$PYTHONPATH" \
    CATKIN_BINARY_DIR="/home/mamad/Graspit/build" \
    "/usr/bin/python" \
    "/home/mamad/Graspit/src/shadow_dep/sr_interface/sr_grasp/setup.py" \
    build --build-base "/home/mamad/Graspit/build/shadow_dep/sr_interface/sr_grasp" \
    install \
    $DESTDIR_ARG \
    --install-layout=deb --prefix="/home/mamad/Graspit/install" --install-scripts="/home/mamad/Graspit/install/bin"
