module RemoveChar where

removeChar :: String -> String
removeChar = init . tail
