// Copyright (c) 2007-2010 Satoshi Nakamoto
// Copyright (c) 2009-2015 The Bitcoin Core developers
// Copyright (c) 2011-2017 The Litecoin Core developers
// Copyright (c) 2013-2023 The Goldcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.


#ifndef GOLDCOIN_CONSENSUS_CONSENSUS_H
#define GOLDCOIN_CONSENSUS_CONSENSUS_H

#include <stdint.h>

// The maximum allowed size for a serialized block, in bytes (only for buffer size limits)
// Goldcoin does not use serialized blocks. Setting this to 32 MB until deemded safe for removal.
static const unsigned int MAX_BLOCK_SERIALIZED_SIZE = 32000000;

/** The maximum allowed size for a block, in bytes (network rule) */
static const unsigned int MAX_BLOCK_BASE_SIZE = 32000000;
/** The maximum allowed number of signature check operations in a block (network rule) */
static const int64_t MAX_BLOCK_SIGOPS_COST = 40000;
/** Coinbase transaction outputs can only be spent after this number of new blocks (network rule) */

static const int COINBASE_MATURITY = 100;

/** Flags for nSequence and nLockTime locks */
enum {
    /* Interpret sequence numbers as relative lock-time constraints. */
    LOCKTIME_VERIFY_SEQUENCE = (1 << 0),

    /* Use GetMedianTimePast() instead of nTime for end point timestamp. */
    LOCKTIME_MEDIAN_TIME_PAST = (1 << 1),
};

#endif // GOLDCOIN_CONSENSUS_CONSENSUS_H
