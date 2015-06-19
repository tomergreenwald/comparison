cc_binary(
    name = "main",
    srcs = ["main.c"],
    deps = [
        "//a",
        "//b",
        "//libby",
    ],
)

filegroup(
    name = "empty",
    srcs = [],
)

filegroup(
    name = "toolchain",
    srcs = [
        ":cc-compiler-tomer1",
    ],
   visibility = ["//visibility:public"],
)

cc_toolchain(
    name = "cc-compiler-tomer",
    all_files = ":empty",
    compiler_files = ":empty",
    cpu = "1tomer",
    dwp_files = ":empty",
    dynamic_runtime_libs = [":empty"],
    linker_files = ":empty",
    objcopy_files = ":empty",
    static_runtime_libs = [":empty"],
    strip_files = ":empty",
    supports_param_files = 0,

   visibility = ["//visibility:public"],
)
