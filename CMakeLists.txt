cmake_minimum_required (VERSION 3.8)

# Enable Hot Reload for MSVC compilers if supported.
if (POLICY CMP0141)
  cmake_policy(SET CMP0141 NEW)
  set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
endif()

project ("BobChatBotApp")

set(sources 
	"main.cpp" 
	"BobChatBotApp.cpp" 
)

set(headers
	"BobChatBotApp.hpp" 
	"IApp.hpp"
	"IModule.hpp" 
)

add_executable (BobChatBotApp ${sources} ${headers} "LLaMaModule.cpp")

include(options.cmake)

if(BOBCBA_USE_LLAMACPP)	
	add_subdirectory(3rd/llama.cpp)
endif()

set_property(TARGET BobChatBotApp PROPERTY CXX_STANDARD 20)

# TODO: Add tests and install targets if needed.
