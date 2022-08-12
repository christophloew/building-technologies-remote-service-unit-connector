# Ubunto 18.04 base image
FROM ubuntu:18.04

RUN apt-get update -y
RUN apt-get upgrade -y

# Upgrade cmake to latest version
RUN apt purge --auto-remove cmake
RUN apt-get install -y software-properties-common
RUN wget -O - https://apt.kitware.com/keys/kitware-archive-latest.asc 2>/dev/null | gpg --dearmor - | tee /etc/apt/trusted.gpg.d/kitware.gpg >/dev/null
RUN apt-key adv --keyserver hkp://keyserver.ubuntu.com:80 --recv-keys 6AF7F09730B3F0A4
RUN apt-add-repository 'deb https://apt.kitware.com/ubuntu/ bionic main'
RUN apt-get update -y

# Install required dependencies
RUN apt-get install -y \
    cmake \
    build-essential \
    ccache \
    g++ \
    gettext \
    libncurses5-dev \
    libelf-dev \
    libssl-dev \
    wget \
    unzip \
    cmake \
    git \
    gawk \
    file \
    rsync \
    python3-pip \
    python2.7 \
    python-pip

RUN pip3 install gcovr

# Declare environment variables
ENV rsuConnectorDir=/rsu-connector-src
ENV rsuConnectorSourceDir=/rsu-connector-src/src
ENV externalDir=/rsu-connector-src/external
ENV openwrtDir=/openwrt
ENV openwrtSource=https://github.com/TDT-AG/openwrt.git
ENV openwrtCommitId=3f5fecfd33d4c1c0bc96b790549ec7dc91e57781
ENV srcConfigMips=/rsu-connector-src/openwrt/openwrt.config-mips
ENV srcConfigX86=/rsu-connector-src/openwrt/openwrt.config-x86_64
ENV srcFeeds=/rsu-connector-src/openwrt/feeds.conf
ENV patches=/rsu-connector-src/openwrt/patches
ENV disable.coverage.autogenerate='true'
ENV buildUser=builduser

# Add user for building the source code
RUN useradd -ms /bin/bash $buildUser

# Create openWRT folder
RUN mkdir $openwrtDir

# Copy the RSU connector source code
COPY . $rsuConnectorDir

# Make builduser the owner of folders
RUN chown -R $buildUser: $rsuConnectorDir
RUN chown -R $buildUser: $openwrtDir

USER $buildUser

#CMD [/bin/sh]
