#include <stdio.h>
#include <stdlib.h>
#include <uv.h>
#include <gtest/gtest.h>

TEST(uv, loop) {

  uv_loop_t* loop = new uv_loop_t();
  uv_loop_init(loop);

  uv_run(loop, UV_RUN_DEFAULT);

  uv_loop_close(loop);
  delete loop;
}
