#include <gtest/gtest.h>

TEST(COLLECT, when_vehicle_reports_a_measurement_is_is_fetched_and_stored_with_vehicle_id){
    struct vehicleInputDetails{
        id;
        key;
        measurement;
    };
    struct vehicleOutputDetails{
        id;
        measurement;
    };
    vehicleInputDetails vehicle_x = {1,2,50};

    vehicleOutputDetails outputDetails_x = get_updated_vehicle_measurement(vehicle_x);

    ASSER_EQ(1, outputDetails_x.id);
    // ASSERT_NEAR(add_numbers(6.5, 2.5), 9, 0.001);
    
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}