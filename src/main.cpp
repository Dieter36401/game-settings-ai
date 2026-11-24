// main.cpp — entry point. Wires config and subsystems together.

#include "gamesettingsai/settings.h"
#include "gamesettingsai/benchmark.h"
#include "gamesettingsai/suggest.h"
#include "gamesettingsai/apply.h"
#include <csignal>
#include <memory>

namespace { std::atomic<bool> g_running{true}; void on_signal(int) { g_running.store(false); } }

int main(int argc, char** argv) {
    std::signal(SIGINT, on_signal);
    std::signal(SIGTERM, on_signal);

    gamesettingsai::Settings settings = gamesettingsai::Settings::load_default();
    gamesettingsai::Benchmark benchmark(settings.store_path);
    gamesettingsai::Suggest suggest(settings.store_path);
    gamesettingsai::Apply apply(settings.store_path);
    std::fprintf(stderr, "[game-settings-ai] ready\n");

    while (g_running.load()) {
        // main loop: pump subsystems
        break;
    }
    return 0;
}
