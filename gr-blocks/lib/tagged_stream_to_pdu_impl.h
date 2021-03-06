/* -*- c++ -*- */
/*
 * Copyright 2013 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

#ifndef INCLUDED_TAGGED_STREAM_TO_PDU_IMPL_H
#define INCLUDED_TAGGED_STREAM_TO_PDU_IMPL_H

#include <gnuradio/blocks/tagged_stream_to_pdu.h>

namespace gr {
namespace blocks {

class BLOCKS_API tagged_stream_to_pdu_impl : public tagged_stream_to_pdu
{
    const pdu::vector_type d_type;
    pmt::pmt_t d_pdu_meta;
    pmt::pmt_t d_pdu_vector;
    std::vector<tag_t> d_tags;

public:
    tagged_stream_to_pdu_impl(pdu::vector_type type, const std::string& lengthtagname);

    int work(int noutput_items,
             gr_vector_int& ninput_items,
             gr_vector_const_void_star& input_items,
             gr_vector_void_star& output_items);
};

} /* namespace blocks */
} /* namespace gr */

#endif
