project "Lua547"
    language "C"

    kind "StaticLib"

    files {
        "%{prj.location}/Source/*.c",
        "%{prj.location}/Include/*.h",
        "%{prj.location}/Include/*.hpp"
    }

    includedirs {
        "%{prj.location}/Include"
    }