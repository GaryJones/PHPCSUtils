<?php

/* testTokenizerIssue1971PHPCSlt330gt271A */
// This has to be the first test in the file!
[$a, /* testTokenizerIssue1971PHPCSlt330gt271B */ [$b]] = $array;

/* testTokenizerIssue1381PHPCSlt290A1 */
echo [ 1,2,3 ] /* testTokenizerIssue1381PHPCSlt290A2 */ [0];

/* testTokenizerIssue1381PHPCSlt290B */
echo 'PHP'[0];

/* testTokenizerIssue1381PHPCSlt290C */
echo $this->addedCustomFunctions['nonce'];

/* testTokenizerIssue1381PHPCSlt290D1 */
echo $this->deprecated_functions[ $function_name ]/* testTokenizerIssue1381PHPCSlt290D2 */['version'];

/* testTokenizerIssue1284PHPCSlt280A */
if ($foo) {}
[$a, $b] = $c;

/* testTokenizerIssue1284PHPCSlt280B */
if ($foo) {}
[$a, $b];

/* testTokenizerIssue1284PHPCSlt290C */
$foo = ${$bar}['key'];

/* testTokenizerIssue1284PHPCSlt280D */
$c->{$var}[ ] = 2;
