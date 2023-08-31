import paho.mqtt.publish as publish
publish.single("ifn649", "Hello World", hostname="13.239.37.158")
print("Done")
