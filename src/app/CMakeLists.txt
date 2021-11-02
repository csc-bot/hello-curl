set(target_name app)

add_executable(${target_name}
  app/main.cpp
)

include(CompileOptions)
set_compile_options(${target_name})

target_link_libraries(
  ${target_name}
  PRIVATE
    CURL::libcurl
)
