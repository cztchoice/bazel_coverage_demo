
#ifdef private
# undef private
# include <sstream>
# define private public
#else
# include <sstream>
#endif
#include "gtest/gtest.h"
#include "demo/common/stamp.h"

TEST(StampTest, version) {
    printf("kBuildScmRevision is %s\n", demo::kBuildScmRevision);
}
