project "YYRunnerInterface"
    language "C++"
    cppdialect "C++20"

    kind "StaticLib"

    files {
        "%{prj.location}/Source/YYRunnerInterface.cpp",
        "%{prj.location}/Include/YYRunnerInterface.h"
    }

    includedirs {
        "%{prj.location}/Include"
    }