cmake_minimum_required(VERSION 3.3)


project(JniStudy)


include_directories(
	/develop/java/jdk1.8.0_51/include
	/develop/java/jdk1.8.0_51/include/linux
)
link_directories(
)


add_subdirectory(01_HelloJni)


