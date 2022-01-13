module RemoveSpace where

import Data.Char ( isSpace )

noSpace :: String -> String
noSpace = filter (not. isSpace)
