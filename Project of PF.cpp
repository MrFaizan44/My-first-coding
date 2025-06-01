#include <iostream>
#include <string>
using namespace std;

int main() 
{
    const int max_items = 10, max_bidders = 10;
    int item_ids[max_items] = {1, 2, 3};
    string item_names[max_items] = {"Laptop   ", "Smartphone", "Headphones"};
    int highest_bids[max_items] = {5000, 3000, 1500}; // Initial highest bids
    string highest_bidders[max_items] = {"Ali", "Sara", "Usman"}; // Initial highest bidders
    string bidders[max_items][max_bidders];
    int bid_counts[max_items] = {1, 1, 1}; // Initial bid counts
    int item_count = 3;
    int choice;

    while (true) 
	{
        // Main menu
        cout << "\n**********************************************\n";
        cout << "       Welcome to Online Auction System    \n";
        cout << "**********************************************\n";
        cout << "1. View Auction Items\n";
        cout << "2. Place a Bid\n";
        cout << "3. View All Bidders for an Item\n";
        cout << "4. Admin Access (Add Items)\n";
        cout << "5. Contact Us\n";
        cout << "6. Exit\n";
        cout << "**********************************************\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) 
		{
            // Display auction items
            cout << "\nAuction Items:\n";
            cout << "-------------------------------------------------------------\n";
            cout << "ID\tItem Name\tPrice\tHighest Bidder\n";
            for (int i = 0; i < item_count; i++) 
			{
                cout << item_ids[i] << "\t" << item_names[i] << "\t\t"
                     << (highest_bids[i] > 0 ? highest_bids[i] : 0) << "\t"
                     << (highest_bids[i] > 0 ? highest_bidders[i] : "None") << "\n";
            }
            cout << "-------------------------------------------------------------\n";
        } 
        else if (choice == 2) 
		{
            // Place a bid
            int item_id, bid_amount;
            string bidder_name;

            cout << "\nEnter the Item ID to place a bid: ";
            cin >> item_id;

            if (item_id > 0 && item_id <= item_count) 
			{
                int index = item_id - 1;

                cout << "Enter your name: ";
                cin >> bidder_name;

                cout << "Enter your bid amount: ";
                cin >> bid_amount;

                if (bid_amount > highest_bids[index]) 
				{
                    highest_bids[index] = bid_amount;
                    highest_bidders[index] = bidder_name;

                    if (bid_counts[index] < max_bidders) 
					{
                        bidders[index][bid_counts[index]] = bidder_name;
                        bid_counts[index]++;
                    }
                    cout << "Bid placed successfully! New highest bid is " << bid_amount << " by " << bidder_name << ".\n";
                } 
				else 
				{
                    cout << "Bid must be higher than the current highest bid.\n";
                }
            } 
			else 
			{
                cout << "Invalid Item ID. Please try again.\n";
            }
        } 
        else if (choice == 3) 
		{
            // View all bidders for a specific item
            int item_id;
            cout << "\nEnter the Item ID to view bidders: ";
            cin >> item_id;

            if (item_id > 0 && item_id <= item_count) 
			{
                int index = item_id - 1;

                cout << "\nBidders for " << item_names[index] << ":\n";
                if (bid_counts[index] > 0) 
				{
                    for (int i = 0; i < bid_counts[index]; i++) 
					{
                        cout << "- " << bidders[index][i] << "\n";
                    }
                } 
				else 
				{
                    cout << "No bidders yet for this item.\n";
                }
            } 
			else 
			{
                cout << "Invalid Item ID. Please try again.\n";
            }
        } 
        else if (choice == 4) 
		{
            // Admin access to add items
            string password, entered_password;
            password = "admin123";

            cout << "\nEnter Admin Password: ";
            cin >> entered_password;

            if (entered_password == password) 
			{
                if (item_count < max_items) 
				{
                    int index = item_count;
                    item_ids[index] = item_count + 1;
                    highest_bids[index] = 0;
                    highest_bidders[index] = "None";
                    bid_counts[index] = 0;

                    cout << "Enter Item Name: ";
                    cin >> item_names[index];

                    cout << "Enter Starting Price: ";
                    cin >> highest_bids[index];

                    highest_bidders[index] = "None";
                    item_count++;
                    cout << "Item added successfully!\n";
                } 
				else 
				{
                    cout << "Cannot add more items. Maximum limit reached.\n";
                }
            } 
			else 
			{
                cout << "Incorrect password. Access denied.\n";
            }
        } 
        else if (choice == 5) 
		{
            // Contact Us information
            cout << "\nContact Us:\n";
            cout << "-------------------------------------------------------------\n";
            cout << "For listing your item, contact with us at:\n";
            cout << "Email: listyouritem@auction.com\n";
            cout << "Phone: +92 (123) 456-7890\n";
            cout << "Website: www.onlineauction.com\n";
            cout << "-------------------------------------------------------------\n";
        } 
        else if (choice == 6) 
		{
            // Exit the program
            cout << "Thank you for using the Online Auction System!\n";
            break;
        } 
        else {
            cout << "Invalid choice. Please select a valid option.\n";
        }
    }

    return 0;
}
