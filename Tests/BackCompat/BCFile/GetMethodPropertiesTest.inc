<?php

/* testBasicFunction */
function myFunction() {}

/* testReturnFunction */
function myFunction(array ...$arrays): array
{
    /* testNestedClosure */
    return array_map(function(array $array): int {
        return array_sum($array);
    }, $arrays);
}

class MyClass {
    /* testBasicMethod */
    function myFunction() {}

    /* testPrivateStaticMethod */
    private static function myFunction() {}

    /* testFinalMethod */
    final public function myFunction() {}

    /* testProtectedReturnMethod */
    protected function myFunction() : int {}

    /* testPublicReturnMethod */
    public function myFunction(): array {}

    /* testNullableReturnMethod */
    public function myFunction(): ?array {}

    /* testMessyNullableReturnMethod */
    public function myFunction() /* comment
        */ :  
        /* comment */ ? // phpcs:ignore Stnd.Cat.Sniff -- For reasons.
        array {}

    /* testReturnNamespace */
    function myFunction(): \MyNamespace\MyClass {}

    /* testReturnMultilineNamespace */
    function myFunction(): \MyNamespace /** comment *\/ comment */
                           \MyClass /* comment */
                           \Foo {}
}

abstract class MyClass
{
    /* testAbstractMethod */
    abstract function myFunction();

    /* testAbstractReturnMethod */
    abstract protected function myFunction(): bool;
}

interface MyInterface
{
    /* testInterfaceMethod */
    function myFunction();
}

$result = array_map(
    /* testArrowFunction */
    static fn(int $number) : int => $number + 1,
    $numbers
);

/* testNotAFunction */
return true;

/* testPhpcsIssue1264 */
function foo() : array {
    echo $foo;
}

/* testArrowFunctionArrayReturnValue */
$fn = fn(): array => [a($a, $b)];

/* testArrowFunctionReturnByRef */
fn&(?string $a) : ?string => $b;

/* testFunctionCallFnPHPCS353-354 */
$value = $obj->fn(true);

/* testArrowFunctionLiveCoding */
// Intentional parse error. This has to be the last test in the file.
$fn = fn
