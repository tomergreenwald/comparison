package(default_visibility = ["//visibility:public"])

genquery(
    name = "genquery",
    expression = "deps(//tools/defaults:jdk)",
    scope = ["//tools/defaults:jdk"],
)

genrule(
    name = "genrule",
    srcs = [":genquery"],
    outs = ["genrule2.txt"],
    cmd = "echo \"int bla();\" > $@",
)

filegroup(
    name = "srcs",
    srcs = [
        "BUILD",
        "genrule2.txt",
    ],
)
