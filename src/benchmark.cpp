// benchmark.cpp — part of game-settings-ai.

#include "gamesettingsai/benchmark.h"

#include <cstdio>

namespace gamesettingsai {

Benchmark::Benchmark(const std::string& config_path)
    : config_path_(config_path) {}

void Benchmark::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Benchmark::run() {
    if (verbose_) std::fprintf(stderr, "[game-settings-ai] benchmark: run\n");
    // core logic lives here
    return true;
}

}  // namespace gamesettingsai
