def Aloz_function(data):
    # Replace this function with your actual implementation of writing data
    # For this example, we'll just print the data to simulate writing
    print(data)

def write_buffered_data(data):
    BUFFER_SIZE = 1024
    buffer = []
    data_length = len(data)
    start_idx = 0

    while start_idx < data_length:
        end_idx = min(start_idx + BUFFER_SIZE, data_length)
        buffer.append(data[start_idx:end_idx])
        start_idx = end_idx

        if len(buffer) >= BUFFER_SIZE or start_idx == data_length:
            write_data = ''.join(buffer)
            Aloz_function(write_data)
            buffer.clear()

# Update the data_to_write variable with the new string
data_to_write = "Que Sera Sera, Que Sera Sera"

# Call the write_buffered_data function with the updated data
write_buffered_data(data_to_write)

