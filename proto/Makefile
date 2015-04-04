# *****************************************************************************************
# Project:              StrokeGenius
# Filename:             Makefile for proto files
# Programmer:           Mohnish CS13b019
# Host System:          Linux
# Date Created:         3/March/2015
# *****************************************************************************************

SRC_DIR = ./
DST_DIR = ../src
CC = protoc

all:
	$(CC) -I=$(SRC_DIR) --java_out=$(DST_DIR) $(SRC_DIR)/MyoDeviceListener.proto
	$(CC) -I=$(SRC_DIR) --cpp_out=$(DST_DIR)/StrokeGeniusProto $(SRC_DIR)/MyoDeviceListener.proto
		
clean:
	rm $(DST_DIR)/StrokeGeniusProto/*