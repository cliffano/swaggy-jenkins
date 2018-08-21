//
// User.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation



public struct User: Codable {

    public var _class: String?
    public var _id: String?
    public var fullName: String?
    public var email: String?
    public var name: String?

    public init(_class: String?, _id: String?, fullName: String?, email: String?, name: String?) {
        self._class = _class
        self._id = _id
        self.fullName = fullName
        self.email = email
        self.name = name
    }

    public enum CodingKeys: String, CodingKey { 
        case _class
        case _id = "id"
        case fullName
        case email
        case name
    }


}
