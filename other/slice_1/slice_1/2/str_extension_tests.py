import str_extension as se
import unittest

class TestStringExtensions(unittest.TestCase):
    
    def test_is_palindrome(self):
        self.assertTrue(se.is_palindrome("level")) 
        self.assertFalse(se.is_palindrome("hello"))  

    def test_remove_symmetric(self):
        self.assertEqual(se.remove_symmetric("abba"), "")  
        self.assertEqual(se.remove_symmetric("abcba"), "c")  

    def test_remove_all(self):
        self.assertEqual(se.remove_all("banana", "a"), "bnn")  
        self.assertEqual(se.remove_all("hello", "l"), "heo") 

    def test_swap_symbols(self):
        self.assertEqual(se.swap_symbols("hello", 1, 3), "hlleo")  
        self.assertEqual(se.swap_symbols("abcde", 0, 4), "ebcda")  

    def test_change_register(self):
        self.assertEqual(se.change_register("Hello World"), "hELLO wORLD")  
        self.assertEqual(se.change_register("Python"), "pYTHON") 

if __name__ == '__main__':
    unittest.main()
