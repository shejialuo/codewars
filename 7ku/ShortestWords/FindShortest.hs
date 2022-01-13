module FindShortest where
findShortest :: String -> Integer
findShortest = toInteger. minimum . map length .words
