

#include <QtGlobal>

// Automatically generated by extract_strings_qt.py
#ifdef __GNUC__
#define UNUSED __attribute__((unused))
#else
#define UNUSED
#endif
static const char UNUSED *bitcoin_strings[] = {
QT_TRANSLATE_NOOP("bitcoin-core", "Empower Network"),
QT_TRANSLATE_NOOP("bitcoin-core", "The %s developers"),
QT_TRANSLATE_NOOP("bitcoin-core", " is spendable from this wallet."),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"-maxtxfee is set very high! Fees this large could be paid on a single "
"transaction."),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"Can't generate a change-address key. No keys in the internal keypool and "
"can't generate any keys."),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"Cannot obtain a lock on data directory %s. %s is probably already running."),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"Cannot provide specific connections and have addrman find outgoing "
"connections at the same."),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"Cannot upgrade a non HD split wallet without upgrading to support pre split "
"keypool. Please use -upgradewallet=169900 or -upgradewallet with no version "
"specified."),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"Distributed under the MIT software license, see the accompanying file %s or "
"%s"),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"Error reading %s! All keys read correctly, but transaction data or address "
"book entries might be missing or incorrect."),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"Error: Listening for incoming connections failed (listen returned error %s)"),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"Fee estimation failed. Fallbackfee is disabled. Wait a few blocks or enable -"
"fallbackfee."),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"Generate a random master key and main account if no master key exists. "
"(default: %s)"),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"Invalid amount for -maxtxfee=<amount>: '%s' (must be at least the minrelay "
"fee of %s to prevent stuck transactions)"),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"Milliseconds between stake attempts. Lowering this param will not result in "
"more stakes. (default: 500)"),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"Number of threads to start for staking, max 1 per active wallet, will divide "
"wallets evenly between threads (default: 1)"),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"On saving a key from the lookahead pool, save all unsaved keys leading up to "
"it too. (default: %s)"),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"Percentage of block reward donated to the foundation fund, overridden by "
"system minimum. (default: 0)"),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"Please check that your computer's date and time are correct! If your clock "
"is wrong, %s will not work properly."),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"Please contribute if you find %s useful. Visit %s for further information "
"about the software."),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"Prune configured below the minimum of %d MiB.  Please use a higher number."),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"Prune: last wallet synchronisation goes beyond pruned data. You need to -"
"reindex (download the whole blockchain again in case of pruned node)"),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"Rescans are not possible in pruned mode. You will need to use -reindex which "
"will download the whole blockchain again."),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"The block database contains a block which appears to be from the future. "
"This may be due to your computer's date and time being set incorrectly. Only "
"rebuild the block database if you are sure that your computer's date and "
"time are correct"),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"The transaction amount is too small to send after the fee has been deducted"),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"This is a pre-release test build - use at your own risk - do not use for "
"mining or merchant applications"),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"This is the transaction fee you may discard if change is smaller than dust "
"at this level"),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"This is the transaction fee you may pay when fee estimates are not available."),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"This product includes software developed by the OpenSSL Project for use in "
"the OpenSSL Toolkit %s and cryptographic software written by Eric Young and "
"UPnP software written by Thomas Bernard."),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"Total length of network version string (%i) exceeds maximum length (%i). "
"Reduce the number or size of uacomments."),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"Unable to replay blocks. You will need to rebuild the database using -"
"reindex-chainstate."),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"Unable to rewind the database to a pre-fork state. You will need to "
"redownload the blockchain"),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"Warning: Private keys detected in wallet {%s} with disabled private keys"),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"Warning: The network does not appear to fully agree! Some miners appear to "
"be experiencing issues."),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"Warning: Wallet file corrupt, data salvaged! Original %s saved as %s in %s; "
"if your balance or transactions are incorrect you should restore from a "
"backup."),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"Warning: We do not appear to fully agree with our peers! You may need to "
"upgrade, or other nodes may need to upgrade."),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"You need to rebuild the database using -reindex to change -timestampindex"),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"You need to rebuild the database using -reindex to go back to unpruned "
"mode.  This will redownload the entire blockchain"),
QT_TRANSLATE_NOOP("bitcoin-core", "%d of last 100 blocks have unexpected version"),
QT_TRANSLATE_NOOP("bitcoin-core", "%s corrupt, salvage failed"),
QT_TRANSLATE_NOOP("bitcoin-core", "%s is set very high!"),
QT_TRANSLATE_NOOP("bitcoin-core", "-maxmempool must be at least %d MB"),
QT_TRANSLATE_NOOP("bitcoin-core", "Account chain not found"),
QT_TRANSLATE_NOOP("bitcoin-core", "Address '%s' is not in the address book."),
QT_TRANSLATE_NOOP("bitcoin-core", "Address '%s' is recorded in the address book."),
QT_TRANSLATE_NOOP("bitcoin-core", "Anon output not found in db, %d"),
QT_TRANSLATE_NOOP("bitcoin-core", "Anon pubkey not found in db, %s"),
QT_TRANSLATE_NOOP("bitcoin-core", "Block %d casts vote for option %u of proposal %u.\n"),
QT_TRANSLATE_NOOP("bitcoin-core", "Cannot downgrade wallet"),
QT_TRANSLATE_NOOP("bitcoin-core", "Cannot resolve -%s address: '%s'"),
QT_TRANSLATE_NOOP("bitcoin-core", "Cannot write to data directory '%s'; check permissions."),
QT_TRANSLATE_NOOP("bitcoin-core", "Change index out of range"),
QT_TRANSLATE_NOOP("bitcoin-core", "Cleared vote token."),
QT_TRANSLATE_NOOP("bitcoin-core", "Clearing vote from block %d to %d.\n"),
QT_TRANSLATE_NOOP("bitcoin-core", "Confidential chain set but not found"),
QT_TRANSLATE_NOOP("bitcoin-core", "Config setting for %s only applied on %s network when in [%s] section."),
QT_TRANSLATE_NOOP("bitcoin-core", "Copyright (C)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Corrupted block database detected"),
QT_TRANSLATE_NOOP("bitcoin-core", "Could not convert prefix to number."),
QT_TRANSLATE_NOOP("bitcoin-core", "Could not decode scan secret as WIF, hex or base58."),
QT_TRANSLATE_NOOP("bitcoin-core", "Could not decode spend secret as hex or base58."),
QT_TRANSLATE_NOOP("bitcoin-core", "Could not get scan public key."),
QT_TRANSLATE_NOOP("bitcoin-core", "Could not get spend public key."),
QT_TRANSLATE_NOOP("bitcoin-core", "Default account not found"),
QT_TRANSLATE_NOOP("bitcoin-core", "DeriveNextKey failed"),
QT_TRANSLATE_NOOP("bitcoin-core", "Do you want to rebuild the block database now?"),
QT_TRANSLATE_NOOP("bitcoin-core", "Done loading"),
QT_TRANSLATE_NOOP("bitcoin-core", "Duplicate index found, %d"),
QT_TRANSLATE_NOOP("bitcoin-core", "Ensure available balance remains above reservebalance. (default: 0)"),
QT_TRANSLATE_NOOP("bitcoin-core", "EraseSetting failed."),
QT_TRANSLATE_NOOP("bitcoin-core", "Error initializing block database"),
QT_TRANSLATE_NOOP("bitcoin-core", "Error initializing wallet database environment %s!"),
QT_TRANSLATE_NOOP("bitcoin-core", "Error loading %s"),
QT_TRANSLATE_NOOP("bitcoin-core", "Error loading %s: Private keys can only be disabled during creation"),
QT_TRANSLATE_NOOP("bitcoin-core", "Error loading %s: Wallet corrupted"),
QT_TRANSLATE_NOOP("bitcoin-core", "Error loading %s: Wallet requires newer version of %s"),
QT_TRANSLATE_NOOP("bitcoin-core", "Error loading block database"),
QT_TRANSLATE_NOOP("bitcoin-core", "Error loading wallet %s. Duplicate -wallet filename specified."),
QT_TRANSLATE_NOOP("bitcoin-core", "Error opening block database"),
QT_TRANSLATE_NOOP("bitcoin-core", "Error reading from database, shutting down."),
QT_TRANSLATE_NOOP("bitcoin-core", "Error upgrading chainstate database"),
QT_TRANSLATE_NOOP("bitcoin-core", "Error"),
QT_TRANSLATE_NOOP("bitcoin-core", "Error: A fatal internal error occurred, see debug.log for details"),
QT_TRANSLATE_NOOP("bitcoin-core", "Error: Disk space is low for %s"),
QT_TRANSLATE_NOOP("bitcoin-core", "Error: Disk space is low!"),
QT_TRANSLATE_NOOP("bitcoin-core", "ExtKeyGetIndex failed."),
QT_TRANSLATE_NOOP("bitcoin-core", "ExtKeySaveAccountToDB failed"),
QT_TRANSLATE_NOOP("bitcoin-core", "Failed to listen on any port. Use -listen=0 if you want this."),
QT_TRANSLATE_NOOP("bitcoin-core", "Failed to rescan the wallet during initialization"),
QT_TRANSLATE_NOOP("bitcoin-core", "Hit nMaxTries limit, %d, %d, have %d, lastindex %d"),
QT_TRANSLATE_NOOP("bitcoin-core", "Import failed - AddKeyPubKey failed."),
QT_TRANSLATE_NOOP("bitcoin-core", "Import failed - stealth address exists."),
QT_TRANSLATE_NOOP("bitcoin-core", "Importing..."),
QT_TRANSLATE_NOOP("bitcoin-core", "Incorrect or no genesis block found. Wrong datadir for network?"),
QT_TRANSLATE_NOOP("bitcoin-core", "Information"),
QT_TRANSLATE_NOOP("bitcoin-core", "Initialization sanity check failed. %s is shutting down."),
QT_TRANSLATE_NOOP("bitcoin-core", "Insufficient funds"),
QT_TRANSLATE_NOOP("bitcoin-core", "Insufficient funds."),
QT_TRANSLATE_NOOP("bitcoin-core", "Invalid -onion address or hostname: '%s'"),
QT_TRANSLATE_NOOP("bitcoin-core", "Invalid -proxy address or hostname: '%s'"),
QT_TRANSLATE_NOOP("bitcoin-core", "Invalid Empower address."),
QT_TRANSLATE_NOOP("bitcoin-core", "Invalid amount for -%s=<amount>: '%s'"),
QT_TRANSLATE_NOOP("bitcoin-core", "Invalid amount for -discardfee=<amount>: '%s'"),
QT_TRANSLATE_NOOP("bitcoin-core", "Invalid amount for -fallbackfee=<amount>: '%s'"),
QT_TRANSLATE_NOOP("bitcoin-core", "Invalid amount for -paytxfee=<amount>: '%s' (must be at least %s)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Invalid amount for -reservebalance=<amount>"),
QT_TRANSLATE_NOOP("bitcoin-core", "Invalid coldstakingaddress."),
QT_TRANSLATE_NOOP("bitcoin-core", "Invalid input key."),
QT_TRANSLATE_NOOP("bitcoin-core", "Invalid key."),
QT_TRANSLATE_NOOP("bitcoin-core", "Invalid netmask specified in -whitelist: '%s'"),
QT_TRANSLATE_NOOP("bitcoin-core", "Invalid rewardaddress."),
QT_TRANSLATE_NOOP("bitcoin-core", "Keypool ran out, please call keypoolrefill first"),
QT_TRANSLATE_NOOP("bitcoin-core", "Loading P2P addresses..."),
QT_TRANSLATE_NOOP("bitcoin-core", "Loading address book for %s.\n"),
QT_TRANSLATE_NOOP("bitcoin-core", "Loading banlist..."),
QT_TRANSLATE_NOOP("bitcoin-core", "Loading block index..."),
QT_TRANSLATE_NOOP("bitcoin-core", "Loading transaction records for %s.\n"),
QT_TRANSLATE_NOOP("bitcoin-core", "Loading wallet..."),
QT_TRANSLATE_NOOP("bitcoin-core", "Minimum time in seconds between successful stakes (default: 0)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Mismatched pubkey for address %s."),
QT_TRANSLATE_NOOP("bitcoin-core", "Must be json object."),
QT_TRANSLATE_NOOP("bitcoin-core", "Must have account to save keys."),
QT_TRANSLATE_NOOP("bitcoin-core", "Must input a stealthaddress."),
QT_TRANSLATE_NOOP("bitcoin-core", "Need a parameter to change."),
QT_TRANSLATE_NOOP("bitcoin-core", "Need to specify a port with -whitebind: '%s'"),
QT_TRANSLATE_NOOP("bitcoin-core", "NewExtKeyFromAccount failed, %s."),
QT_TRANSLATE_NOOP("bitcoin-core", "NewExtKeyFromAccount failed."),
QT_TRANSLATE_NOOP("bitcoin-core", "NewStealthKeyFromAccount failed."),
QT_TRANSLATE_NOOP("bitcoin-core", "NewStealthKeyV2FromAccount failed."),
QT_TRANSLATE_NOOP("bitcoin-core", "No default account set."),
QT_TRANSLATE_NOOP("bitcoin-core", "No key for anonoutput, %s"),
QT_TRANSLATE_NOOP("bitcoin-core", "No public key found for address %s."),
QT_TRANSLATE_NOOP("bitcoin-core", "Not anon output %s %d"),
QT_TRANSLATE_NOOP("bitcoin-core", "Not enough anon outputs exist, last: %d, required: %d"),
QT_TRANSLATE_NOOP("bitcoin-core", "Not enough file descriptors available."),
QT_TRANSLATE_NOOP("bitcoin-core", "Num inputs per signature out of range"),
QT_TRANSLATE_NOOP("bitcoin-core", "Number of keys to load into the lookahead pool per chain. (default: %u)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Only able to send to stealth address for now."),
QT_TRANSLATE_NOOP("bitcoin-core", "OpIsCoinstake is not active yet."),
QT_TRANSLATE_NOOP("bitcoin-core", "Option out of range."),
QT_TRANSLATE_NOOP("bitcoin-core", "Output isn't standard."),
QT_TRANSLATE_NOOP("bitcoin-core", "PrepareTransaction for device failed: %s"),
QT_TRANSLATE_NOOP("bitcoin-core", "ProduceSignature from device failed: %s"),
QT_TRANSLATE_NOOP("bitcoin-core", "Proposal out of range."),
QT_TRANSLATE_NOOP("bitcoin-core", "Prune cannot be configured with a negative value."),
QT_TRANSLATE_NOOP("bitcoin-core", "Prune mode is incompatible with -txindex."),
QT_TRANSLATE_NOOP("bitcoin-core", "Pruning blockstore..."),
QT_TRANSLATE_NOOP("bitcoin-core", "ReadStoredTx failed for %s"),
QT_TRANSLATE_NOOP("bitcoin-core", "Reducing -maxconnections from %d to %d, because of system limitations."),
QT_TRANSLATE_NOOP("bitcoin-core", "Replaying blocks..."),
QT_TRANSLATE_NOOP("bitcoin-core", "Rescanning..."),
QT_TRANSLATE_NOOP("bitcoin-core", "Rewinding blocks..."),
QT_TRANSLATE_NOOP("bitcoin-core", "Ring size out of range [%d, %d]"),
QT_TRANSLATE_NOOP("bitcoin-core", "Ring size out of range"),
QT_TRANSLATE_NOOP("bitcoin-core", "Scan secret is not 32 bytes."),
QT_TRANSLATE_NOOP("bitcoin-core", "Section [%s] is not recognized."),
QT_TRANSLATE_NOOP("bitcoin-core", "SetSetting failed."),
QT_TRANSLATE_NOOP("bitcoin-core", "Signing transaction failed"),
QT_TRANSLATE_NOOP("bitcoin-core", "Specified -walletdir \"%s\" does not exist"),
QT_TRANSLATE_NOOP("bitcoin-core", "Specified -walletdir \"%s\" is a relative path"),
QT_TRANSLATE_NOOP("bitcoin-core", "Specified -walletdir \"%s\" is not a directory"),
QT_TRANSLATE_NOOP("bitcoin-core", "Specified blocks directory \"%s\" does not exist."),
QT_TRANSLATE_NOOP("bitcoin-core", "Spend secret is not 32 bytes."),
QT_TRANSLATE_NOOP("bitcoin-core", "Spend secret must be different to scan secret."),
QT_TRANSLATE_NOOP("bitcoin-core", "Stake your coins to support network and gain reward (default: true)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Starting network threads..."),
QT_TRANSLATE_NOOP("bitcoin-core", "StealthSecret failed, try again."),
QT_TRANSLATE_NOOP("bitcoin-core", "TODO: LoadJson."),
QT_TRANSLATE_NOOP("bitcoin-core", "The source code is available from %s."),
QT_TRANSLATE_NOOP("bitcoin-core", "The specified config file %s does not exist\n"),
QT_TRANSLATE_NOOP("bitcoin-core", "The transaction amount is too small to pay the fee"),
QT_TRANSLATE_NOOP("bitcoin-core", "The wallet will avoid paying less than the minimum relay fee."),
QT_TRANSLATE_NOOP("bitcoin-core", "This is experimental software."),
QT_TRANSLATE_NOOP("bitcoin-core", "This is the minimum transaction fee you pay on every transaction."),
QT_TRANSLATE_NOOP("bitcoin-core", "This is the transaction fee you will pay if you send a transaction."),
QT_TRANSLATE_NOOP("bitcoin-core", "Transaction amount too small"),
QT_TRANSLATE_NOOP("bitcoin-core", "Transaction amounts must not be negative"),
QT_TRANSLATE_NOOP("bitcoin-core", "Transaction amounts must not be negative."),
QT_TRANSLATE_NOOP("bitcoin-core", "Transaction fee and change calculation failed"),
QT_TRANSLATE_NOOP("bitcoin-core", "Transaction fee and change calculation failed."),
QT_TRANSLATE_NOOP("bitcoin-core", "Transaction has too long of a mempool chain"),
QT_TRANSLATE_NOOP("bitcoin-core", "Transaction must have at least one recipient"),
QT_TRANSLATE_NOOP("bitcoin-core", "Transaction must have at least one recipient."),
QT_TRANSLATE_NOOP("bitcoin-core", "Transaction too large for fee policy"),
QT_TRANSLATE_NOOP("bitcoin-core", "Transaction too large for fee policy."),
QT_TRANSLATE_NOOP("bitcoin-core", "Transaction too large"),
QT_TRANSLATE_NOOP("bitcoin-core", "Unable to bind to %s on this computer (bind returned error %s)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Unable to bind to %s on this computer. %s is probably already running."),
QT_TRANSLATE_NOOP("bitcoin-core", "Unable to create the PID file '%s': %s"),
QT_TRANSLATE_NOOP("bitcoin-core", "Unable to generate initial keys"),
QT_TRANSLATE_NOOP("bitcoin-core", "Unable to generate keys"),
QT_TRANSLATE_NOOP("bitcoin-core", "Unable to reduce plain output to add blind change."),
QT_TRANSLATE_NOOP("bitcoin-core", "Unable to start HTTP server. See debug log for details."),
QT_TRANSLATE_NOOP("bitcoin-core", "Unknown account."),
QT_TRANSLATE_NOOP("bitcoin-core", "Unknown action, must be one of 'add/edit/del'."),
QT_TRANSLATE_NOOP("bitcoin-core", "Unknown chain."),
QT_TRANSLATE_NOOP("bitcoin-core", "Unknown input key version."),
QT_TRANSLATE_NOOP("bitcoin-core", "Unknown network specified in -onlynet: '%s'"),
QT_TRANSLATE_NOOP("bitcoin-core", "Unknown setting"),
QT_TRANSLATE_NOOP("bitcoin-core", "Unsupported logging category %s=%s."),
QT_TRANSLATE_NOOP("bitcoin-core", "Upgrading txindex database"),
QT_TRANSLATE_NOOP("bitcoin-core", "User Agent comment (%s) contains unsafe characters."),
QT_TRANSLATE_NOOP("bitcoin-core", "Verifying blocks..."),
QT_TRANSLATE_NOOP("bitcoin-core", "Verifying wallet(s)..."),
QT_TRANSLATE_NOOP("bitcoin-core", "Voting for option %u on proposal %u from block %d to %d.\n"),
QT_TRANSLATE_NOOP("bitcoin-core", "Voting for option %u on proposal %u"),
QT_TRANSLATE_NOOP("bitcoin-core", "Wallet %s resides outside wallet directory %s"),
QT_TRANSLATE_NOOP("bitcoin-core", "Wallet has no active master key."),
QT_TRANSLATE_NOOP("bitcoin-core", "Wallet must be unlocked."),
QT_TRANSLATE_NOOP("bitcoin-core", "Wallet must have a default account set."),
QT_TRANSLATE_NOOP("bitcoin-core", "Wallet needed to be rewritten: restart %s to complete"),
QT_TRANSLATE_NOOP("bitcoin-core", "Warning"),
QT_TRANSLATE_NOOP("bitcoin-core", "Warning: unknown new rules activated (versionbit %i)"),
QT_TRANSLATE_NOOP("bitcoin-core", "You need to rebuild the database using -reindex to change -addressindex"),
QT_TRANSLATE_NOOP("bitcoin-core", "You need to rebuild the database using -reindex to change -spentindex"),
QT_TRANSLATE_NOOP("bitcoin-core", "Zapping all transactions from wallet..."),
QT_TRANSLATE_NOOP("bitcoin-core", "add_to_addressbook can't be set without save"),
QT_TRANSLATE_NOOP("bitcoin-core", "address_standard must be a string."),
QT_TRANSLATE_NOOP("bitcoin-core", "bad childNo."),
QT_TRANSLATE_NOOP("bitcoin-core", "bech32 encode failed."),
QT_TRANSLATE_NOOP("bitcoin-core", "bech32 must be true when using makeV2."),
QT_TRANSLATE_NOOP("bitcoin-core", "coldstakingaddress can't be a stealthaddress."),
QT_TRANSLATE_NOOP("bitcoin-core", "coldstakingaddress must be a string."),
QT_TRANSLATE_NOOP("bitcoin-core", "extkey must have private key to derive hardened keys."),
QT_TRANSLATE_NOOP("bitcoin-core", "foundationdonationpercent must be a number."),
QT_TRANSLATE_NOOP("bitcoin-core", "height must be a number."),
QT_TRANSLATE_NOOP("bitcoin-core", "height_end must be after height_start."),
QT_TRANSLATE_NOOP("bitcoin-core", "mindepth must be a number."),
QT_TRANSLATE_NOOP("bitcoin-core", "mixinselection must be a number."),
QT_TRANSLATE_NOOP("bitcoin-core", "mode must be a number."),
QT_TRANSLATE_NOOP("bitcoin-core", "num_derives to int failed."),
QT_TRANSLATE_NOOP("bitcoin-core", "num_derives_h to int failed."),
QT_TRANSLATE_NOOP("bitcoin-core", "num_prefix_bits invalid number."),
QT_TRANSLATE_NOOP("bitcoin-core", "num_prefix_bits must be <= 32."),
QT_TRANSLATE_NOOP("bitcoin-core", "rewardaddress must be a string."),
QT_TRANSLATE_NOOP("bitcoin-core", "secp256k1_generate_mlsag failed %d"),
QT_TRANSLATE_NOOP("bitcoin-core", "secp256k1_get_keyimage failed %d"),
QT_TRANSLATE_NOOP("bitcoin-core", "secp256k1_prepare_mlsag failed %d"),
QT_TRANSLATE_NOOP("bitcoin-core", "smsgfeeratetarget can't be negative."),
QT_TRANSLATE_NOOP("bitcoin-core", "stakecombinethreshold can't be negative."),
QT_TRANSLATE_NOOP("bitcoin-core", "stakesplitthreshold can't be negative."),
};