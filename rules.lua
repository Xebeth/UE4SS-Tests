includes("RE-UE4SS/tools/xmakescripts/rules/**.lua")

rule("ue4ss.tests")
    add_deps("ue4ss.base", {order = true})
    after_load(function(target)
        target:set("kind", "binary")
        target:set("languages", "cxx23")
        target:set("exceptions", "cxx")
        target:set("group", "tests")
    end)

    on_install(function(target)
        import("tests.install").install(target)
    end)