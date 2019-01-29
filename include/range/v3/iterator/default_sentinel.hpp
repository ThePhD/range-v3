/// \file
// Range v3 library
//
//  Copyright Eric Niebler 2014-present
//
//  Use, modification and distribution is subject to the
//  Boost Software License, Version 1.0. (See accompanying
//  file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)
//
// Project home: https://github.com/ericniebler/range-v3
//
#ifndef RANGES_V3_ITERATOR_DEFAULT_SENTINEL_HPP
#define RANGES_V3_ITERATOR_DEFAULT_SENTINEL_HPP

#include <range/v3/detail/config.hpp>
#include <range/v3/utility/static_const.hpp>

namespace ranges
{
    struct default_sentinel_t
    {};

    // Default sentinel
    RANGES_INLINE_VARIABLE(default_sentinel_t, default_sentinel)
}

#endif
