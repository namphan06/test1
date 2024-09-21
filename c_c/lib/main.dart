import 'package:c_c/add_item.dart';
import 'package:c_c/firebase_options.dart';
import 'package:c_c/screens/splash_screen.dart';
import 'package:firebase_core/firebase_core.dart';

import 'package:flutter/material.dart';
// import 'package:flutter_dotenv/flutter_dotenv.dart';
import 'package:flutter_stripe/flutter_stripe.dart';
// import 'D:\/ATTTFULL/lt/firebase_options.dart';

void main() async {
  WidgetsFlutterBinding.ensureInitialized();

  // Khởi tạo Firebase với cấu hình từ firebase_options.dart
  try {
    await Firebase.initializeApp(
      options: DefaultFirebaseOptions.currentPlatform,
    );
  } catch (e) {
    print("Error initializing Firebase: $e");
    return;
  }
  Stripe.publishableKey =
      "pk_test_51MZHMhSF3jyzuIge766JvDB1tCbBuUk5F1NjHLW66gy4aPeZZxWe6q3CVTmOO1m50N5sEdSfrj7Vrcr5O2EZs4tA00QvS9CKQ6";

  // Tải biến môi trường từ file .env
  // await dotenv.load(fileName: "assets/.env");

  // Gọi hàm fetch_categories nếu cần
  fetch_categories();

  runApp(const MyApp());
}

class MyApp extends StatelessWidget {
  const MyApp({super.key});
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      debugShowCheckedModeBanner: false,
      title: 'campus_catalogue',
      theme: ThemeData(
        primarySwatch: Colors.blue,
      ),
      routes: {
        '/': (context) => SplashScreen(),
      },
    );
  }
}
