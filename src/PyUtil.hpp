// Copyright (c) 2014, German Neuroinformatics Node (G-Node)
//
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted under the terms of the BSD License. See
// LICENSE file in the root of the Project.

#ifndef NIXPY_UTIL_H
#define NIXPY_UTIL_H

#include <boost/python.hpp>

#include <nix.hpp>
#include <accessors.hpp>

namespace nixpy {

struct PyUtil {
    static void do_export();
};
}

#endif
