/*!
 * \file interleaved_short_to_complex_short.h
 * \brief Adapts a short (16-bits) interleaved sample stream into a std::complex<short> stream
 * \author Carles Fernandez Prades, cfernandez(at)cttc.es
 *
 * -------------------------------------------------------------------------
 *
 * Copyright (C) 2010-2019  (see AUTHORS file for a list of contributors)
 *
 * GNSS-SDR is a software defined Global Navigation
 *          Satellite Systems receiver
 *
 * This file is part of GNSS-SDR.
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 * -------------------------------------------------------------------------
 */

#ifndef GNSS_SDR_INTERLEAVED_SHORT_TO_COMPLEX_SHORT_H
#define GNSS_SDR_INTERLEAVED_SHORT_TO_COMPLEX_SHORT_H

#include <boost/shared_ptr.hpp>
#include <gnuradio/sync_decimator.h>

class interleaved_short_to_complex_short;

using interleaved_short_to_complex_short_sptr = boost::shared_ptr<interleaved_short_to_complex_short>;

interleaved_short_to_complex_short_sptr make_interleaved_short_to_complex_short();

/*!
 * \brief This class adapts a short (16-bits) interleaved sample stream
 * into a std::complex<short> stream
 */
class interleaved_short_to_complex_short : public gr::sync_decimator
{
public:
    int work(int noutput_items,
        gr_vector_const_void_star &input_items,
        gr_vector_void_star &output_items);

private:
    friend interleaved_short_to_complex_short_sptr make_interleaved_short_to_complex_short();
    interleaved_short_to_complex_short();
};

#endif  // GNSS_SDR_INTERLEAVED_SHORT_TO_COMPLEX_SHORT_H
