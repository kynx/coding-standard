<?php

declare(strict_types=1);

namespace WebimpressCodingStandardTest\Sniffs\WhiteSpace;

use WebimpressCodingStandardTest\Sniffs\AbstractTestCase;

class ScopeIndentUnitTest extends AbstractTestCase
{
    public function getErrorList(string $testFile = '') : array
    {
        if ($testFile === 'ScopeIndentUnitTest.1.inc') {
            return [
                24 => 1,
                34 => 2,
                38 => 1,
                39 => 1, //
                40 => 1, //
                41 => 1,
                42 => 1,
                45 => 2,
                46 => 1, //
                47 => 1, //
                48 => 2,
                49 => 1, //
                50 => 1, //
                56 => 1,
                61 => 1,
                62 => 1,
                63 => 1,
                64 => 1,
                65 => 1,
                66 => 1,
                72 => 1, //
                73 => 1, //
                74 => 2, // 1
                80 => 1, //
                81 => 2, // 1
                87 => 1,
                89 => 1,
                95 => 1, //
                96 => 1, //
                97 => 2, // 1
                98 => 2, // 1
                106 => 1,
                111 => 2, // 1 -- todo: the same errors
                117 => 1,
                128 => 1,
                136 => 1,
                138 => 1,
                146 => 1,
                149 => 1,
            ];
        }

        return [
            10 => 1,
            11 => 1,
            12 => 1,
            13 => 1,
            14 => 1,
            16 => 1,
            20 => 1,
            24 => 1,
            25 => 1,
            26 => 1,
            27 => 1,
            28 => 1,
            29 => 1,
            30 => 1,
            31 => 1,
            32 => 1,
            33 => 1,
            34 => 1,
            35 => 1,
            36 => 1,
            37 => 1,
            38 => 1,
            39 => 1,
            43 => 1,
            47 => 1,
            48 => 1,
            49 => 1,
            73 => 1,
            74 => 1,
            77 => 1,
            82 => 1,
            87 => 1,
            91 => 1,
            95 => 1,
            98 => 1,
            101 => 1,
            110 => 1,
            115 => 1,
            119 => 1,
            123 => 1,
            125 => 1,
            129 => 1,
            132 => 1,
            139 => 1,
            150 => 1,
            152 => 1,
            153 => 1,
            168 => 1,
            169 => 1,
            171 => 1,
            178 => 1,
            185 => 1,
            189 => 1,
            191 => 1,
            193 => 1,
            205 => 1,
            207 => 1,
            208 => 1,
            219 => 1,
            220 => 1,
            221 => 1,
            228 => 1,
            233 => 1,
            237 => 1,
            239 => 1,
            244 => 1,
            250 => 1,
            253 => 1,
            260 => 1,
            264 => 1,
            269 => 1,
            279 => 1,
            283 => 1,
            284 => 1,
            285 => 1,
            286 => 1,
            287 => 1,
            288 => 1,
            289 => 1,
            290 => 1,
            291 => 1,
            292 => 1,
            293 => 1,
            294 => 1,
            295 => 1,
            297 => 1,
            298 => 1,
            299 => 1,
            300 => 1,
            301 => 1,
            302 => 1,
            303 => 1,
            304 => 1,
            305 => 1,
            306 => 1,
            307 => 1,
            311 => 1,
            312 => 1,
            313 => 1,
            315 => 1,
            316 => 1,
            318 => 1,
            319 => 1,
            340 => 1,
            341 => 1,
            342 => 1,
            346 => 1,
            347 => 1,
            348 => 1,
            352 => 1,
            354 => 1,
            359 => 1,
            360 => 1,
            361 => 1,
            370 => 1,
            371 => 1,
            372 => 1,
            376 => 1,
            377 => 1,
            378 => 1,
            399 => 1,
            400 => 2,
            403 => 1,
            404 => 1,
            405 => 1,
            406 => 1,
            407 => 1,
            408 => 1,
            409 => 1,
            410 => 1,
            411 => 1,
            412 => 1,
            413 => 1,
            414 => 1,
            415 => 1,
            416 => 1,
            418 => 1,
            419 => 1,
            420 => 1,
            421 => 1,
            422 => 1,
            423 => 1,
            424 => 1,
            425 => 1,
            426 => 1,
            427 => 1,
            428 => 1,
            429 => 1,
            430 => 1,
            431 => 1,
            432 => 1,
            433 => 1,
            434 => 1,
            436 => 1,
            440 => 1,
            441 => 1,
            442 => 1,
            446 => 1,
            447 => 1,
            448 => 1,
            452 => 1,
            453 => 1,
            454 => 1,
            455 => 1,
            456 => 1,
            457 => 1,
            458 => 1,
            459 => 1,
            460 => 1,
            463 => 1,
            464 => 1,
            465 => 1,
            469 => 1,
            470 => 1,
            471 => 1,
            474 => 1,
            475 => 1,
            477 => 1,
            478 => 1,
            511 => 1,
            512 => 1,
            513 => 1,
            514 => 1,
            516 => 1,
            517 => 1,
            518 => 1,
            519 => 1,
            522 => 1,
            523 => 1,
            524 => 1,
            525 => 1,
            526 => 1,
            527 => 1,
            529 => 1,
            530 => 1,
            531 => 1,
            532 => 1,
            533 => 1,
        ];
    }

    public function getWarningList(string $testFile = '') : array
    {
        return [];
    }
}
