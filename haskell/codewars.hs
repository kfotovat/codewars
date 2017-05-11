import Data.Char
import Data.List
--CodeWars: Prize Draw

rank :: [Char] -> [Int] -> Int -> [Char]
rank [] _ _ = "No participants"
rank st we n
  | n > length st = "Not enough participants"

getLength :: (Foldable t) => [t a] -> [Int]
getLength [] = []
getLength (h:t)
  | (length (h:t) > 1) = length h:(getLength t)
  | otherwise = length h:[]

getN :: (Foldable t) => [t a] -> [Int]
getN [] = []
getN (h:t)
  | (length (h:t) > 1) = replaceChar h:(getN t)
  | otherwise = replaceChar h:[]

replaceChar :: Char -> Int
getN [] = []
getN (h:t)
  | (length (h:t) > 1) = replaceChar h:(getN t)
  | otherwise = replaceChar h:[]
  where charRanks = zip ['a'..'z'] [1..]
