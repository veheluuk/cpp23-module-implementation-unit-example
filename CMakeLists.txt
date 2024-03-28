cmake_minimum_required(VERSION 3.28)

project(example_app CXX)

# Output binary executable
add_executable(
  example_app
  "main.cpp"
)

set_target_properties(
	example_app
	PROPERTIES
	CXX_STANDARD 23
	CXX_STANDARD_REQUIRED ON
)

target_link_libraries(
	example_app
	PUBLIC
	example_module
)

add_subdirectory(example_module)
