FROM nvidia/cudagl:9.2-devel-ubuntu16.04

#****************Setting up user *********************
ARG UNAME=ros
ARG PASS=ros
ARG UID=1000
ARG GID=1000
RUN apt-get update && apt-get install sudo -y
RUN sudo -i
RUN groupadd -g $GID -o $UNAME
RUN sudo useradd -m -u $UID -g $GID -p $(openssl passwd -1 $PASS) -o -s  /bin/bash $UNAME
RUN usermod -aG sudo $UNAME
USER $UNAME 
WORKDIR home/$UNAME/ 

#********************Installing Extra packaged**********************
RUN echo $PASS | sudo -S echo "fuck me!"
RUN echo $PASS | sudo -S apt-get update
RUN echo $PASS | sudo -S apt-get install -y software-properties-common
#gedit
RUN echo "Y" |sudo -S apt-get install gedit
#python2.7
RUN echo "gedit"&& echo $PASS | sudo -S apt-get update
RUN echo "gedit"&& echo "Y" | sudo -S apt upgrade
RUN echo "python"&& echo "Y" | sudo -S apt install python2.7 python-pip
#python 3.6
# RUN echo "\u000A" |  sudo -S add-apt-repository ppa:jonathonf/python-3.6 
# RUN  sudo -S apt-get update
# RUN echo "Y"|sudo -S apt-get install python3.6
# RUN sudo -S update-alternatives --install /usr/bin/python3 python3 /usr/bin/python3.5 1
# RUN sudo -S update-alternatives --install /usr/bin/python3 python3 /usr/bin/python3.6 2
# RUN sudo -S update-alternatives --config python3
# RUN sudo -S apt-get -y install python3-pip
# RUN echo "Y"|sudo -S apt-get remove python3-apt
# RUN echo "Y"|sudo -S apt-get install python3-apt
#installing terminator
    #"\u000A" is like pressing the Enter key
RUN echo $PASS | sudo -S apt-get install -y software-properties-common
RUN echo "\u000A" | sudo -S add-apt-repository ppa:gnome-terminator
RUN echo $PASS | sudo -S apt-get update
RUN echo "Y" | sudo -S apt-get install terminator

# *****************************Installing Graspit!**********************
RUN echo $PASS | sudo -S echo "fuck me!"
RUN echo $PASS | sudo -S apt-get update
RUN echo "Y" | sudo -S  apt-get install libqt4-dev
RUN echo "Y" | sudo -S  apt-get install libqt4-opengl-dev
RUN echo "Y" | sudo -S apt-get install libqt4-sql-psql
RUN echo "Y" | sudo -S apt-get install libcoin80-dev
RUN echo "Y" | sudo -S apt-get install libsoqt4-dev
RUN echo "Y" | sudo -S apt-get install libblas-dev
RUN echo "Y" | sudo -S apt-get install liblapack-dev
RUN echo "Y" | sudo -S apt-get install libqhull-dev
RUN echo "Y" | sudo -S apt-get install libeigen3-dev
            # *************Installing cmake**********************
RUN echo $PASS | sudo -S echo "fuck me!"
RUN echo "\u000A" | sudo -S add-apt-repository ppa:george-edison55/cmake-3.x
RUN echo $PASS | sudo -S apt-get update
RUN echo "Y" | sudo -S apt-get install cmake
            # *****************installing  Graspit****************

COPY graspit /home/$UNAME/graspit 
RUN cd /home/$UNAME/graspit && export GRASPIT=$PWD \
&& echo $PASS | sudo -S mkdir build && cd build && echo $PASS | sudo -S cmake .. && echo $PASS | sudo -S make -j5 &&\     
export LD_LIBRARY_PATH=/usr/local/lib:$LD_LIBRARY_PATH  

#********************************Installing ROs****************************
RUN echo $PASS | sudo -S echo "fuck me!"
#Setup your sources.list
RUN echo $PASS | sudo -S sh -c 'echo "deb http://packages.ros.org/ros/ubuntu $(lsb_release -sc) main" > /etc/apt/sources.list.d/ros-latest.list'
#Set up your keys
RUN echo $PASS | sudo -S  apt-key adv --keyserver 'hkp://keyserver.ubuntu.com:80' --recv-key C1CF6E31E6BADE8868B172B4F42ED6FBAB17C654
#Installation
RUN echo $PASS | sudo -S apt-get update
    #Desktop-Full Install: (Recommended) : ROS, rqt, rviz, robot-generic libraries, 2D/3D simulators, navigation and 2D/3D perception 
    RUN echo "Y" | sudo -S  apt-get install ros-kinetic-desktop-full

#Initialize rosdep
RUN echo $PASS | sudo -S rosdep init
RUN rosdep update
#Environment setup 
RUN echo "source /opt/ros/kinetic/setup.bash" >> ~/.bashrc
#source can not be used in bash so instead of "source ~/.bashrc " use ". ~/.bashrc "
RUN . ~/.bashrc 
RUN echo $PASS | sudo -S chmod +x /opt/ros/kinetic/setup.bash
RUN bash /opt/ros/kinetic/setup.bash
#Dependencies for building packages
RUN  echo "Y" | sudo -S  apt install python-rosinstall python-rosinstall-generator python-wstool build-essential

# ************************************************************
CMD /bin/bash
