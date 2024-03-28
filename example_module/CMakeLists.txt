cmake_minimum_required(VERSION 3.28)

add_library(example_module)

target_sources(
	example_module
	PUBLIC
	FILE_SET CXX_MODULES FILES
	"example_module.ixx"
)

target_sources(
	example_module
	PRIVATE
	"example_module.cpp"
)

set_target_properties(
	example_module
	PROPERTIES
	CXX_STANDARD 23
	CXX_STANDARD_REQUIRED ON
)

target_link_libraries(
	example_app
	PUBLIC
	example_module
)
