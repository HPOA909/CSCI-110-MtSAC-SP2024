class Customer:
    def __init__(self, name, address, phone):
        self.name = name
        self.address = address
        self.phone = phone
    
    def displayInfo(self):
        print("Customer name:", self.name)
        print("Customer address:", self.address)
        print("Customer phone:", self.phone)



customer = Customer(name=input("Enter your name: "), address=input("Enter your address: "), phone=input("Enter your phone number: "))

customer.displayInfo()