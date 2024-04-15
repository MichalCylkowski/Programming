<?php
class Invoice {
    private $product_number;
    private $product_description;
    private $quantity;
    private $pricePerItem;

    public function __construct($product_number, $product_description, $quantity, $pricePerItem) {
        $this->setProductNumber($product_number);
        $this->setProductDescription($product_description);
        $this->setQuantity($quantity);
        $this->setPricePerItem($pricePerItem);
    }

    public function setProductNumber($product_number) {
        $this->product_number = $product_number;
    }

    public function getProductNumber() {
        return $this->product_number;
    }

    public function setProductDescription($product_description) {
        $this->product_description = $product_description;
    }

    public function getProductDescription() {
        return $this->product_description;
    }

    public function setQuantity($quantity) {
        $this->quantity = $quantity;
    }

    public function getQuantity() {
        return $this->quantity;
    }

    public function setPricePerItem($pricePerItem) {
        $this->pricePerItem = $pricePerItem;
    }

    public function getPricePerItem() {
        return $this->pricePerItem;
    }

    public function Amount() {
        if ($this->pricePerItem <= 0 || $this->quantity <= 0) {
            return 0;
        }

        return $this->quantity * $this->pricePerItem;
    }
}

$invoice = new Invoice('13', 'Żubrówka', -1, 20.99);
echo "Product number: " . $invoice->getProductNumber() . "\n";
echo "Product description: " . $invoice->getProductDescription() . "\n";
echo "Quantity: " . $invoice->getQuantity() . "\n";
echo "Price per item: " . $invoice->getPricePerItem() . "\n";
echo "Amount: " . $invoice->Amount() . "\n";
