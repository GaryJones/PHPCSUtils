<?php

/* testNotAClass */
function notAClass() {}

interface testFIINInterface2 {}

/* testInterface */
interface testFIINInterface {}

/* testImplementedClass */
class testFIINImplementedClass implements testFIINInterface {}

/* testMultiImplementedClass */
class testFIINMultiImplementedClass implements testFIINInterface, testFIINInterface2 {}

/* testNamespacedClass */
class testFIINNamespacedClass implements \PHP_CodeSniffer\Tests\Core\File\testFIINInterface {}

/* testNonImplementedClass */
class testFIINNonImplementedClass {}

/* testClassThatExtendsAndImplements */
class testFECNClassThatExtendsAndImplements extends testFECNClass implements InterfaceA, \NameSpaced\Cat\InterfaceB {}

/* testClassThatImplementsAndExtends */
class testFECNClassThatImplementsAndExtends implements \InterfaceA, InterfaceB extends testFECNClass {}

/* testAnonClassImplements */
$anon = class() implements testFIINInterface {}

/* testMissingImplementsName */
class testMissingExtendsName implements { /* missing interface name */  } // Internal parse error.

// Intentional parse error. Has to be the last test in the file.
/* testParseError */
class testParseError implements testInterface
