// suggest.cpp — part of game-settings-ai.

#include "gamesettingsai/suggest.h"

#include <cstdio>

namespace gamesettingsai {

Suggest::Suggest(const std::string& config_path)
    : config_path_(config_path) {}

void Suggest::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Suggest::run() {
    if (verbose_) std::fprintf(stderr, "[game-settings-ai] suggest: run\n");
    // core logic lives here
    return true;
}

}  // namespace gamesettingsai
