public class Customer {
    private String name;
    private String surname;
    private String phoneNumber;

    private Customer(Builder builder) {
        this.name = builder.name;
        this.surname = builder.surname;
        this.phoneNumber = builder.phoneNumber;
    }

    public String getFirstName() {
        return name;
    }

    public String getLastName() {
        return surname;
    }

    public String getPhoneNumber() {
        return phoneNumber;
    }

    public static class Builder {
        private String name;
        private String surname;
        private String phoneNumber;

        public Builder setFirstName(String name) {
            this.name = name;
            return this;
        }

        public Builder setLastName(String surname) {
            this.surname = surname;
            return this;
        }

        public Builder setPhoneNumber(String phoneNumber) {
            this.phoneNumber = phoneNumber;
            return this;
        }

        public Customer build() {
            return new Customer(this);
        }
    }
}
