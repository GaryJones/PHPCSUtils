<?php

/* testNotAFunction */
echo 'foo';

class MagicClass {
    /* testMagicMethodInClass */
    function __construct() {}

    /* testMagicMethodInClassUppercase */
    function __CALL($name, $args) {}

    /* testMagicMethodInClassMixedCase */
    function __Set($name, $value) {}

    /* testMagicFunctionInClassNotGlobal */
    function __autoload() {}

    /* testMethodInClassNotMagicName */
    function __myFunction() {}
}

/* testMagicMethodNotInClass */
function __callStatic() {}

/* testMagicFunction */
function __autoload($class) {}

if ( $someCondition ) {
    /* testMagicFunctionInConditionMixedCase */
    function __autoload($class) {}
}

/* testFunctionNotMagicName */
function __myFunction() {}

/* Magic methods in anonymous classes. */
$a = new class {
    /* testMagicMethodInAnonClass */
    function __destruct() {}

    /* testMagicMethodInAnonClassUppercase */
    function __GET($name) {}

    /* testMagicFunctionInAnonClassNotGlobal */
    function __autoload() {}

    /* testMethodInAnonClassNotMagicName */
    function __myFunction() {}
};

class MySoapImplementation extends \SoapClient {
    /* testDoubleUnderscoreMethodInClass */
    public function __getCookies() {}

    /* testDoubleUnderscoreMethodInClassMixedcase */
    public function __getLASTRequestHeaders() {}
}

class NotSoapImplementation {
    /* testDoubleUnderscoreMethodInClassNotExtended */
    public function __getCookies() {}
}

/* testDoubleUnderscoreMethodNotInClass */
function __getCookies() {}

trait MagicTrait
{
    /* testMagicMethodInTrait */
    function __toString() {}

    /* testDoubleUnderscoreMethodInTrait */
    public function __getLastRequest() {}

    /* testMagicFunctionInTraitNotGlobal */
    function __autoload() {}

    /* testMethodInTraitNotMagicName */
    function __myFunction() {}
}

interface MagicInterface
{
    /* testMagicMethodInInterface */
    function __set_state($name, $args);

    /* testDoubleUnderscoreMethodInInterface */
    public function __setLocation() {}

    /* testMagicFunctionInInterfaceNotGlobal */
    function __autoload();

    /* testMethodInInterfaceNotMagicName */
    function __myFunction();
}
