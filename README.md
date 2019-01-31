# bazel_coverage_demo

a demo for bazel coverage, create coverage report command is:

`bazel coverage --build_tests_only --incompatible_remove_native_http_archive=false --test_lang_filters=-py --host_java_toolchain=@bazel_tools//tools/jdk:toolchain_hostjdk8  --instrument_test_targets --coverage_report_generator="@bazel_tools//tools/test/CoverageOutputGenerator/java/com/google/devtools/coverageoutputgenerator:Main" --combined_report=lcov -- //demo/common:all`
