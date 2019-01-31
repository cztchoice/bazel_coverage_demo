package(
    default_visibility = ["//visibility:public"],
)

cc_library(
    name = "stamp",
    hdrs = [
        "stamp.h"
    ],
    linkstamp = "stamp.cc"
)

cc_test(
    name = "stamp_test",
    srcs = [
        "test/stamp_test.cpp",
    ],
    copts = ['-Iexternal/gtest/include','-Dprivate=public -Dprotected=public'],
    deps = [
        ":stamp",
        "@gtest//:main"
    ]
)
