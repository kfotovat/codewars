import Data.List
import Data.Char

doubleMe x = x + x
squareMe x = x * x

uniqueChars :: [Char] -> Bool
uniqueChars [] = True
uniqueChars (h:t) = (length (filter (==h) t)) == 0 && uniqueChars t


isPermutedString :: [Char] -> [Char] -> Bool
isPermutedString [] _ = False
isPermutedString _ [] = False
isPermutedString str1 str2 = (sort str1) == (sort str2)

replaceSpaces :: [Char] -> [Char]
replaceSpaces [] = []
replaceSpaces (h:t)
  | isSpace h = sub ++ replaceSpaces t
  | otherwise = h:replaceSpaces t
  where sub = "%20%"

zeroSum' :: (Num a) => [a] -> a
zeroSum' = foldl (+) 0

nonZeroSum' :: (Num a) => [a] -> a
nonZeroSum' t = foldl (\acc h -> acc + h) 0 t

{-all equivalent-}
funcComp = sum (replicate 3 (max 4.5 3.3))
funcComp' = sum . replicate 3 . max 4.5 $ 3.3
funcComp'' = sum . replicate 3 $ max 4.5 3.3
funcComp''' = sum $ replicate 3 $ max 4.5dev
 3.3
