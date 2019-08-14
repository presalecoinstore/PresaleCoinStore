// Copyright (c) 2017-2018 The PreSaleCoinStore developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef PreSaleCoinStore_BLOCKSIGNATURE_H
#define PreSaleCoinStore_BLOCKSIGNATURE_H

#include "key.h"
#include "primitives/block.h"
#include "keystore.h"

bool SignBlockWithKey(CBlock& block, const CKey& key);
bool SignBlock(CBlock& block, const CKeyStore& keystore);
bool CheckBlockSignature(const CBlock& block);

#endif //PreSaleCoinStore_BLOCKSIGNATURE_H
