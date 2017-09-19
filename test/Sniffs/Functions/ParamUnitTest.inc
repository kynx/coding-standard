<?php

namespace MyNamespace\Test;

use DateTime;
use RuntimeException as Exception;
use ZTest\MyNamespace\ParentClass as FunctionParamParent;

class FunctionParam extends FunctionParamParent
{
    public function paramType(DateTime $a) {}

    /**
     * @param DateTime $a
     */
    public function paramTypeInDocs($a) {}

    public function paramNeedsSpecification($a) {}

    public function arrayTypeNeedsSpecification(array $a) {}

    /**
     * @param array $a
     */
    public function arrayTypeNeedsSpecificationInDocs($a) {}

    /**
     * @param int[] $a
     */
    public function arrayTypeSpecified(array $a) {}

    /**
     * @param string $a
     */
    public function arrayTypeSpecifiedWrongly(array $a) {}

    public function traversableNeedsSpecification(\Traversable $a) {}

    /**
     * @param \Traversable $a
     */
    public function traversableNeedsSpecificationInDocs($a) {}

    /**
     * @param \ArrayAccess|\ArrayObject $a
     */
    public function traversableSpecified(\Traversable $a) {}

    /**
     * @param string|\DateTime[]|\Traversable $a
     */
    public function traversableSpecifiedWrongly(\Traversable $a) {}

    public function iterableNeedsSpecification(iterable $a) {}

    /**
     * @param iterable $a
     */
    public function iterableNeedsSpecificationInDocs($a) {}

    /**
     * @param MyIterableClass $a
     */
    public function iterableSpecified(iterable $a) {}

    /**
     * @param int|DateTime[] $a
     */
    public function iterableSpecifiedWrongly(iterable $a) {}

    /**
     * @param mixed $a
     */
    public function mixedParamIsNotAllowed($a) {}

    /**
     * @param mixed[] $a
     */
    public function mixedArrayParamIsNotAllowed(array $a) {}

    public function multipleParamsOneNeedsSpecification($a, DateTime $v) {}

    public function multipleParamsOneNeedsClarification(DateTime $a, array $b) {}

    public function multipleParamsAllNeedsSpecification($a, $b, $c) {}

    /**
     * @param int ...$a
     */
    public function variadicParamWithoutTypeHint(...$a) {}

    /**
     * @param string ...$a
     */
    public function variadicParamTagRedundant(string ...$a) {}

    /**
     * @param string[] ...$a
     */
    public function variadicParamWrongTag1(string ...$a) {}

    /**
     * @param array[] ...$a
     */
    public function variadicParamWrongTag2(array ...$a) {}

    /**
     * @param
     */
    public function missingParamTypeAndInvalidTypeHintCase(String $a) {}

    /**
     * @param something
     */
    public function invalidParamTagAndInvalidTypeHintCase(?INT $a) {}

    /**
     * @param $a something
     */
    public function invalidParamTag(bool $a) {}

    /**
     * @param ...$a
     */
    public function missingTypeInParam(...$a) {}

    /**
     * @param $c
     * @param int $inconsistentPARAMname
     */
    public function inconsistentParamName($a, $inconsistentParamName) {}

    /**
     * @param string[] $a
     */
    public function variadicParam(...$a) {}

    public function selfAndParent(FunctionParam $a, FunctionParamParent $b) {}

    public function nullableSelfAndParent(?FunctionParam $a, ?FunctionParamParent $b) {}

    /**
     * @param FunctionParam $a
     * @param FunctionParamParent $b
     */
    public function selfAndParentInTags($a, $b) {}

    /**
     * @param bool|int|bool $a
     */
    public function duplicatedTypeInTag($a) {}

    /**
     * @param void $a
     * @param false|true $b
     */
    public function voidAndTrueAndFalse($a, $b) {}

    /**
     * @param DateTime $a
     * @param \DateTime $b
     * @param DateTime $c
     * @param \DateTime $d
     * @param null|DateTime $e
     * @param null|\DateTime $f
     * @param null|DateTime $g
     * @param null|\DateTime $h
     */
    public function fcqnAndImportedClass(
        DateTime $a,
        DateTime $b,
        \DateTime $c,
        \DateTime $d,
        ?DateTime $e,
        ?DateTime $f,
        ?\DateTime $g,
        ?\DateTime $h
    ) {}

    /**
     * @param int[] $a
     */
    public function missingNullInTag(?iterable $a) {}

    public function selfInsteadOfClassName(\MyNamespace\Test\FunctionParam $a) {}

    /**
     * @param \MyNamespace\Test\FunctionParam $a
     */
    public function selfInsteadOfClassNameInTag($a) {}

    public function parentInsteadOfFCQNParentClassName(\ZTest\MyNamespace\ParentClass $b) {}

    /**
     * @param \ZTest\MyNamespace\ParentClass $a
     */
    public function parentInsteadOfFCQNParentClassNameInTag($a) {}

    /**
     * @param \DateTime $a Description.
     * @param null|DateTime ...$b
     */
    public function canUseImportedClasses(\DateTime $a, ?\DateTime ...$b) {}

    /**
     * @param int $a
     * @param string $a
     */
    public function duplicatedTagForTheSameParam($a) {}

    /**
     * @param float $a
     * @param false $b
     * @param object $c
     */
    public function inconsistentPrimitiveTypes(int $a, bool $b, string $c) {}

    /**
     * @param ?array $a
     * @param |int| $b
     * @param int $c
     */
    public function invalidParamTypes($a, $b) {}

    /**
     * @param string $a
     * @param \RuntimeException $b
     */
    public function wrongType(DateTime $a, \Throwable $b) {}

    /**
     * @param String $a
     * @param array $b
     * @param \Traversable $c
     * @param iterable $d
     */
    public function someTypesNeedsSpecification($a, $b, $c, $d, \Exception $e, Exception $f) {}

    /**
     * @param DateTime $a
     */
    public function paramContainAnotherType(\DateTimeInterface $a) {}

    /**
     * @param string|int|float $a
     * @param DateTime|int|bool $b
     * @param \ArrayObject|\ArrayAccess|DateTime|null $c
     */
    public function wrongOrderOfParamTypes($a, $b, $c) {}

    /**
     * @param boolean $a
     * @param null|DateTime|Something $b
     * @param string|DateTime|Something $c
     * @param null|DateTime $d
     * @param null|DateTime $e
     * @param null|string $g
     */
    public function defaultValueAndNull(
        $a,
        ?DateTime $b,
        DateTime $c,
        DateTime $d,
        DateTime $e = null,
        string $f = null,
        string $g = null,
        string $h = 'null'
    ) {}

    /**
     * @param null[]|string[] $a
     * @param null|int $b
     * @param int|string $c
     */
    public function inconsistentParamTypesInTag($a, int $b, string $c) {}

    /**
     * @param int $d This is very Long
     *     description of the last param.
     * @return string Here is description
     *     of the return value.
     * @param bool $c Another param description
     *     It is also.
     *     Very long.
     *
     * @param string $a
     */
    public function wrongParamOrder($a, DateTime $b, $c, $d) {}

    public function paramDoesNotNeedTag1(string $a = null) {}

    /** */
    public function paramDoesNotNeedTag2(int $int = null) {}

    /**
     * @param null|int $a
     */
    public function paramHasWrongType1(bool $a = null) {}

    /**
     * @param string $a
     */
    public function paramHasWrongType2(int $a) {}
}