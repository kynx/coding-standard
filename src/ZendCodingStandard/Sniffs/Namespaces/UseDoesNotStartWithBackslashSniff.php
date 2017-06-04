<?php
namespace ZendCodingStandard\Sniffs\Namespaces;

use PHP_CodeSniffer\Files\File;
use PHP_CodeSniffer\Sniffs\Sniff;
use PHP_CodeSniffer\Util\Tokens;
use ZendCodingStandard\CodingStandard;

class UseDoesNotStartWithBackslashSniff implements Sniff
{
    /**
     * @return int[]
     */
    public function register()
    {
        return [T_USE];
    }

    /**
     * @param File $phpcsFile
     * @param int $stackPtr
     * @return void
     */
    public function process(File $phpcsFile, $stackPtr)
    {
        if (! CodingStandard::isGlobalUse($phpcsFile, $stackPtr)) {
            return;
        }

        $tokens = $phpcsFile->getTokens();
        $classPtr = $phpcsFile->findNext(
            Tokens::$emptyTokens,
            $stackPtr + 1,
            null,
            true
        );

        $lowerContent = strtolower($tokens[$classPtr]['content']);
        if ($lowerContent === 'function' || $lowerContent === 'const') {
            $classPtr = $phpcsFile->findNext(
                Tokens::$emptyTokens,
                $classPtr + 1,
                null,
                true
            );
        }

        if ($tokens[$classPtr]['code'] === T_NS_SEPARATOR
            || ($tokens[$classPtr]['code'] === T_STRING
                && $tokens[$classPtr]['content'] === '\\')
        ) {
            $error = 'Use statement cannot start with a backslash';
            $fix = $phpcsFile->addFixableError($error, $classPtr, '');

            if ($fix) {
                if ($tokens[$classPtr - 1]['code'] !== T_WHITESPACE) {
                    $phpcsFile->fixer->replaceToken($classPtr, ' ');
                } else {
                    $phpcsFile->fixer->replaceToken($classPtr, '');
                }
            }
        }
    }
}