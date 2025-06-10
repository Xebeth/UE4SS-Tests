set_project("UE4SS Tests")
set_version("1.0.0")

set_languages("c++latest")

includes("RE-UE4SS")
includes("rules.lua")

-- Function to add platform-specific flags
function add_platform_specific_flags()
    if is_plat("windows") then
        add_cxxflags("/EHsc")
    else
        -- Add flags for e.g. linux here
    end
end

add_requires("gtest", {configs = {main = false, gmock = true}})

if is_host("windows") then
	set_defaultmode("Game__Shipping__Win64")
end

target("test_syserror")
	add_files("tests/main.cpp")
	add_rules("ue4ss.tests")
	add_deps("Helpers")

	add_packages("gtest")
	-- Define the test dependency
	-- Iterate over test files and create test targets
	for _, file in ipairs(os.files("tests/**test_*.cpp")) do
		local name = string.gsub(file, "tests/", "")
		add_files(file)
		add_tests("default")
		add_platform_specific_flags()
	end
target_end()