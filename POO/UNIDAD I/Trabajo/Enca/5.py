class Customer:
	def __init__(self):
		self.__accountNumber = 4321

	def __processAccount(self):
		print("Processing Account")

	def getAccountNumber(self):
		return self.__accountNumber

c = Customer()
print(c._Customer__accountNumber)
c._Customer__processAccount()