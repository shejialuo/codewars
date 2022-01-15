module Duplicates where

import Data.List ( sort, group )
import Data.Char ( toLower )

duplicateCount :: String -> Int
duplicateCount =  length .filter ((>1) . length) .group .sort . map toLower
