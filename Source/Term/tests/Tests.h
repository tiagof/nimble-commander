// Copyright (C) 2020 Michael Kazakov. Subject to GNU General Public License version 3.
#pragma once

#include <catch2/catch_all.hpp>
#include <filesystem>

struct TempTestDir {
    TempTestDir();
    ~TempTestDir();
    std::filesystem::path directory;
};
